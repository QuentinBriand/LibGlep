/*
** EPITECH PROJECT, 2023
** opengl
** File description:
** Vertex
*/

#include "Mesh/Vertex.hpp"

namespace Glep
{
    Vertex::Vertex(const glm::vec3 &_position, const glm::vec2 &_uv, const glm::vec3 &_color)
    {
        position = _position;
        color = _color;
        uv = _uv;
    }
} // namespace Glep