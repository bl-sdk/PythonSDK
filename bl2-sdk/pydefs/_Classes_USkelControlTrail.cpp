#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControlTrail(py::module &m)
{
    py::class_< USkelControlTrail,  USkelControlBase   >(m, "USkelControlTrail")
        .def_readwrite("ChainLength", &USkelControlTrail::ChainLength)
        .def_readwrite("ChainBoneAxis", &USkelControlTrail::ChainBoneAxis)
        .def_readwrite("TrailRelaxation", &USkelControlTrail::TrailRelaxation)
        .def_readwrite("StretchLimit", &USkelControlTrail::StretchLimit)
        .def_readwrite("FakeVelocity", &USkelControlTrail::FakeVelocity)
        .def_readwrite("ThisTimstep", &USkelControlTrail::ThisTimstep)
        .def_readwrite("TrailBoneLocations", &USkelControlTrail::TrailBoneLocations)
        .def_readwrite("OldLocalToWorld", &USkelControlTrail::OldLocalToWorld)
        .def("StaticClass", &USkelControlTrail::StaticClass, py::return_value_policy::reference)
          ;
}