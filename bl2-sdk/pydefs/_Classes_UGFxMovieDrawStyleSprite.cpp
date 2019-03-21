#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleSprite()
{
    py::class_< UGFxMovieDrawStyleSprite,  UGFxMovieDrawStyleComponent   >("UGFxMovieDrawStyleSprite")
        .def_readwrite("SpriteSize", &UGFxMovieDrawStyleSprite::SpriteSize)
        .def_readwrite("TheSprite", &UGFxMovieDrawStyleSprite::TheSprite)
        .def("StaticClass", &UGFxMovieDrawStyleSprite::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}