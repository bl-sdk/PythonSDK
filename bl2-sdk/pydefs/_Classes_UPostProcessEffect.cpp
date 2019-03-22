#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPostProcessEffect(py::module &m)
{
    py::class_< UPostProcessEffect,  UObject   >(m, "UPostProcessEffect")
        .def_readwrite("EffectName", &UPostProcessEffect::EffectName)
        .def_readwrite("NodePosY", &UPostProcessEffect::NodePosY)
        .def_readwrite("NodePosX", &UPostProcessEffect::NodePosX)
        .def_readwrite("DrawWidth", &UPostProcessEffect::DrawWidth)
        .def_readwrite("DrawHeight", &UPostProcessEffect::DrawHeight)
        .def_readwrite("OutDrawY", &UPostProcessEffect::OutDrawY)
        .def_readwrite("InDrawY", &UPostProcessEffect::InDrawY)
        .def_readwrite("SceneDPG", &UPostProcessEffect::SceneDPG)
        .def("StaticClass", &UPostProcessEffect::StaticClass, py::return_value_policy::reference)
          ;
}