#include <iostream>
#include "Behaviour.hpp"
#include "Camera.hpp"
#include "Collider.hpp"
#include "Component.hpp"
#include "GameObject.hpp"
#include "Misc.hpp"
#include "Physics.hpp"
#include "Renderer.hpp"
#include "Rigidbody.hpp"
#include "Transform.hpp"
#include "transform.hpp"
#include "Vector2.hpp"

using namespace std;
using namespace LinearchExt;

int main()
{
    cout << "Hello world!" << Vector2::Project(Vector2(3,1), Vector2(0,1)) << " h3h3";
    return 0;
}
