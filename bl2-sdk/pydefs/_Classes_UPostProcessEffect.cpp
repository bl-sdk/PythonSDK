#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPostProcessEffect()
{
    class_< UPostProcessEffect, bases< UObject >  , boost::noncopyable>("UPostProcessEffect", no_init)
        .def_readwrite("EffectName", &UPostProcessEffect::EffectName)
        .def_readwrite("NodePosY", &UPostProcessEffect::NodePosY)
        .def_readwrite("NodePosX", &UPostProcessEffect::NodePosX)
        .def_readwrite("DrawWidth", &UPostProcessEffect::DrawWidth)
        .def_readwrite("DrawHeight", &UPostProcessEffect::DrawHeight)
        .def_readwrite("OutDrawY", &UPostProcessEffect::OutDrawY)
        .def_readwrite("InDrawY", &UPostProcessEffect::InDrawY)
        .def_readwrite("SceneDPG", &UPostProcessEffect::SceneDPG)
        .def("StaticClass", &UPostProcessEffect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}