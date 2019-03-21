#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleSprite()
{
    class_< UGFxMovieDrawStyleSprite, bases< UGFxMovieDrawStyleComponent >  , boost::noncopyable>("UGFxMovieDrawStyleSprite", no_init)
        .def_readwrite("SpriteSize", &UGFxMovieDrawStyleSprite::SpriteSize)
        .def_readwrite("TheSprite", &UGFxMovieDrawStyleSprite::TheSprite)
        .def("StaticClass", &UGFxMovieDrawStyleSprite::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}