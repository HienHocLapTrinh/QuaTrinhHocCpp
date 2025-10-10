#include <iostream>
#include <raylib.h>

using namespace std;
int player1_score = 0;
int player2_score = 0;
Color green = {173, 204, 96, 255};
Color darkGreen = {43, 51, 24, 255};

class Ball
{
public:
    float x, y;
    int speed_x;
    int speed_y;
    int radius;
    void Draw()
    {
        DrawCircle(x, y, radius, WHITE);
    }
    void Update()
    {
        x += speed_x;
        y += speed_y;
        if (y + radius >= GetScreenHeight() || y - radius <= 0)
        {
            speed_y *= -1;
        }
        if (x + radius >= GetScreenWidth() || x - radius <= 0)
        {
            speed_x *= -1;
        }
        if (x + radius >= GetScreenWidth()) // player 2 win
        {
            player2_score++;
            resetBall();
        }
        if (x - radius <= 0)
        {
            player1_score++;
            resetBall();
        }
    }

    void resetBall()
    {
        x = GetScreenWidth() / 2;
        y = GetScreenHeight() / 2;
        int speed_choices[2] = {-1, 1};
        speed_x *= speed_choices[GetRandomValue(0, 1)];
        speed_y *= speed_choices[GetRandomValue(0, 1)];
    }
};

class Paddle
{
protected:
    void limitMovement()
    {
        if (y <= 0)
        {
            y = 0;
        }
        if (y + height >= GetScreenHeight())
        {
            y = GetScreenHeight() - height;
        }
    }

public:
    float x, y;
    float width, height;
    int speed_y;
    void Draw()
    {
        DrawRectangle(x, y, width, height, WHITE);
    };
    void Update()
    {
        if (IsKeyDown(KEY_UP))
        {
            y -= speed_y;
        }
        if (IsKeyDown(KEY_DOWN))
        {
            y += speed_y;
        }
        // check collisions
        limitMovement();
    }
};
class CpuPaddle : public Paddle
{
public:
    void Update(int ball_y)
    {
        // AI don gian
        if (y + height / 2 > ball_y)
        {
            y -= speed_y;
        }
        if (y + height / 2 <= ball_y)
        {
            y += speed_y;
        }
        // //Player 2
        // if (IsKeyDown(KEY_W))
        // {
        //     y -= speed_y;
        // }
        // if (IsKeyDown(KEY_S))
        // {
        //     y += speed_y;
        // }
        // check collisions
        limitMovement();
    }
};

Ball ball;
Paddle player1;
CpuPaddle player2;
int main()
{
    const int screen_width = 1280;
    const int screen_height = 800;
    InitWindow(screen_width, screen_height, "Pong");
    SetTargetFPS(60);
    // Ball
    ball.radius = 20;
    ball.x = screen_width / 2;
    ball.y = screen_height / 2;
    ball.speed_x = 7;
    ball.speed_y = 7;
    // Player
    player1.width = 20;
    player1.height = 120;
    player1.x = screen_width - player1.width - 10;
    player1.y = screen_height / 2 - player1.height / 2;
    player1.speed_y = 6;

    player2.width = 20;
    player2.height = 120;
    player2.x = 10;
    player2.y = screen_height / 2 - player2.height / 2;
    player2.speed_y = 6;

    // Game loop
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        // Updating
        ball.Update();
        player1.Update();
        player2.Update(ball.y);
        // Check for collisions
        if (CheckCollisionCircleRec(Vector2{ball.x, ball.y}, ball.radius, Rectangle{player1.x, player1.y, player1.width, player1.height}))
        {
            ball.speed_x *= -1;
        }
        if (CheckCollisionCircleRec(Vector2{ball.x, ball.y}, ball.radius, Rectangle{player2.x, player2.y, player2.width, player2.height}))
        {
            ball.speed_x *= -1;
        }

        // Drawing
        ClearBackground(green);
        DrawCircle(screen_width / 2, screen_height / 2, 180, WHITE);
        DrawLine(screen_width / 2 , screen_height , screen_width / 2 , 0, WHITE);
        DrawRectangle(screen_width / 2 - 10 ,0, 20, screen_height, WHITE);
        DrawCircle(screen_width / 2, screen_height / 2, 160, green);
        DrawCircle(screen_width / 2, screen_height / 2, 15, WHITE);
        player1.Draw();
        player2.Draw();
        ball.Draw();
        DrawText(TextFormat("%i", player2_score), screen_width / 4, 20, 80, WHITE);
        DrawText(TextFormat("%i", player1_score), 3 * screen_width / 4, 20, 80, WHITE);
        EndDrawing();
    }
    CloseWindow();
}