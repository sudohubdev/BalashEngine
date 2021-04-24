#ifndef _types_
#define _types_
typedef double scalar;
class vec2 {
    public:
    scalar x;
    scalar y;
    vec2(scalar x,scalar y);
    scalar len();

} ;
//okay so how to make cpp the main branch
class vec3
{
public:
    scalar x, y, z;
    vec3(scalar x, scalar y, scalar z);
    scalar len();
};

typedef struct texture{
    vec2 uvcoord;
    void* texbuff;
    struct texture* next;
}Texture;
typedef struct vert{
    vec3 loc;
    Texture tex;
    unsigned int color;

    struct vert* next;
} Vertex;

typedef struct object{ //obj is entitiy
    vec3 loc;
    void* data;
    Vertex* list;
    Texture* tex;
    struct object* next;
} Obj;



scalar v2len(vec2 in);
scalar v3len(vec3 in);
vec2 add(vec2 in1,vec2 in2);
vec3 add(vec3 in1,vec3 in2);
vec2 mul(vec2 in,scalar s);
vec3 mul(vec3 in,scalar s);
vec3 mul(vec3 in1,vec3 in2);


#endif
