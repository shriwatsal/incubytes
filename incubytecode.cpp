#include <bits/stdc++.h>
using namespace std;

class Space
{
private:
    int a, b, c;    
    char dir; 
    char orn;

public:

    
    Space(int ia, int ib, int ic, char idir, char org)
    {
        a = ia;
        b = ib;
        c = ic;
        dir = idir;
        orn = org;
    }

    
    void Back() 
    {
        switch (dir)
        {
        case 'N':
            b--;
            break;
        case 'S':
            b++;
            break;
        case 'E':
            a--;
            break;
        case 'W':
            a++;
            break;
        case 'U':
            c--;
            break;
        case 'D':
            c++;
            break;
        }
    }

    
    void Fornt() 
    {
        switch (dir)
        {
        case 'N':
            b++;
            break;
        case 'S':
            b--;
            break;
        case 'E':
            a++;
            break;
        case 'W':
            a--;
            break;
        case 'U':
            c++;
            break;
        case 'D':
            c--;
            break;
        }
    }

    
    void Left()
    {
        switch (dir)
        {
        case 'N':
            dir = 'W';
            orn = 'W';
            break;
        case 'S':
            dir = 'E';
            orn = 'E';
            break;
        case 'E':
            dir = 'N';
            orn = 'N';
            break;
        case 'W':
            dir = 'S';
            orn = 'S';
            break;
        case 'D':
            if (orn == 'N')
            {
                dir = 'W';
                orn = 'W';
                break;
            }
            else if (orn == 'S')
            {
                dir = 'E';
                orn = 'E';
                break;
            }
            else if (orn == 'E')
            {
                dir = 'N';
                orn = 'N';
                break;
            }
            else
            {
                dir = 'S';
                orn = 'S';
                break;
            }
        case 'U':
            if (orn == 'N')
            {
                dir = 'W';
                orn = 'W';
                break;
            }
            else if (orn == 'S')
            {
                dir = 'E';
                orn = 'E';
                break;
            }
            else if (orn == 'E')
            {
                dir = 'N';
                orn = 'N';
                break;
            }
            else
            {
                dir = 'S';
                orn = 'S';
                break;
            }
        }
    }


    void Right()
    {

        switch (dir)
        {
        case 'N':
            dir = 'E';
            orn = 'E';
            break;
        case 'S':
            dir = 'W';
            orn = 'W';
            break;
        case 'E':
            dir = 'S';
            orn = 'S';
            break;
        case 'W':
            dir = 'N';
            orn = 'N';
            break;
        case 'D':
            if (orn == 'N')
            {
                dir = 'E';
                orn = 'E';
                break;
            }
            else if (orn == 'S')
            {
                dir = 'W';
                orn = 'W';
                break;
            }
            else if (orn == 'E')
            {
                dir = 'S';
                orn = 'S';
                break;
            }
            else
            {
                dir = 'N';
                orn = 'N';
                break;
            }
        case 'U':
            if (orn == 'N')
            {
                dir = 'E';
                orn = 'E';
                break;
            }
            else if (orn == 'S')
            {
                dir = 'W';
                orn = 'W';
                break;
            }
            else if (orn == 'E')
            {
                dir = 'S';
                orn = 'S';
                break;
            }
            else
            {
                dir = 'N';
                orn = 'N';
                break;
            }
        }
    }

    
    void Up()
    {
        if (dir != 'U')
        {
            dir = 'U';
        }
    }

    
    void Down()
    {
        if (dir != 'D')
        {
            dir = 'D';
        }
    }

    
    void Position()
    {
        cout << "Current Position: (" << a << ", " << b << ", " << c << "), dir: " << dir << endl;
    }
};

int main()
{

    Space SpaceCraft(0, 0, 0, 'N', 'N');

    string commands;
    cin >> commands;
    cout << endl;
    
    for (int i = 0; i < commands.length(); i++)
    {
        char code = commands[i];
        switch (code)
        {
        case 'f':
            SpaceCraft.Fornt();
            SpaceCraft.Position();
            break;
        case 'b':
            SpaceCraft.Back();
            SpaceCraft.Position();
            break;
        case 'l':
            SpaceCraft.Left();
            SpaceCraft.Position();
            break;
        case 'r':
            SpaceCraft.Right();
            SpaceCraft.Position();
            break;
        case 'u':
            SpaceCraft.Up();
            SpaceCraft.Position();
            break;
        case 'd':
            SpaceCraft.Down();
            SpaceCraft.Position();
            break;
        }
    }

    cout<<endl;
    cout<<"Final Position and Final Direction of SpaceCraft: "<<endl;
    SpaceCraft.Position();

    return 0;
}