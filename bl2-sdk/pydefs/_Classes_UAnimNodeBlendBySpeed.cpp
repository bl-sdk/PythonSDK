#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendBySpeed(py::object m)
{
    py::class_< UAnimNodeBlendBySpeed,  UAnimNodeBlendList   >(m, "UAnimNodeBlendBySpeed")
        .def_readwrite("Speed", &UAnimNodeBlendBySpeed::Speed)
        .def_readwrite("LastChannel", &UAnimNodeBlendBySpeed::LastChannel)
        .def_readwrite("BlendUpTime", &UAnimNodeBlendBySpeed::BlendUpTime)
        .def_readwrite("BlendDownTime", &UAnimNodeBlendBySpeed::BlendDownTime)
        .def_readwrite("BlendDownPerc", &UAnimNodeBlendBySpeed::BlendDownPerc)
        .def_readwrite("Constraints", &UAnimNodeBlendBySpeed::Constraints)
        .def_readwrite("BlendUpDelay", &UAnimNodeBlendBySpeed::BlendUpDelay)
        .def_readwrite("BlendDownDelay", &UAnimNodeBlendBySpeed::BlendDownDelay)
        .def_readwrite("BlendDelayRemaining", &UAnimNodeBlendBySpeed::BlendDelayRemaining)
        .def("StaticClass", &UAnimNodeBlendBySpeed::StaticClass, py::return_value_policy::reference)
          ;
}