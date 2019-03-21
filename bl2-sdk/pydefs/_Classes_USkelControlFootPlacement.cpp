#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControlFootPlacement(py::object m)
{
    py::class_< USkelControlFootPlacement,  USkelControlLimb   >(m, "USkelControlFootPlacement")
        .def_readwrite("FootOffset", &USkelControlFootPlacement::FootOffset)
        .def_readwrite("FootUpAxis", &USkelControlFootPlacement::FootUpAxis)
        .def_readwrite("FootRotOffset", &USkelControlFootPlacement::FootRotOffset)
        .def_readwrite("MaxUpAdjustment", &USkelControlFootPlacement::MaxUpAdjustment)
        .def_readwrite("MaxDownAdjustment", &USkelControlFootPlacement::MaxDownAdjustment)
        .def_readwrite("MaxFootOrientAdjust", &USkelControlFootPlacement::MaxFootOrientAdjust)
        .def("StaticClass", &USkelControlFootPlacement::StaticClass, py::return_value_policy::reference)
          ;
}