#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGearLikenessConsumer(py::module &m)
{
    py::class_< UIGearLikenessConsumer,  UInterface   >(m, "UIGearLikenessConsumer")
        .def("ShouldRefreshLikenessOf", &UIGearLikenessConsumer::ShouldRefreshLikenessOf)
        .def("AssumeLikenessOf", &UIGearLikenessConsumer::AssumeLikenessOf)
          ;
}