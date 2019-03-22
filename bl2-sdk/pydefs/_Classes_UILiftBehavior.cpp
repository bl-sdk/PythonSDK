#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UILiftBehavior(py::module &m)
{
    py::class_< UILiftBehavior,  UInterface   >(m, "UILiftBehavior")
        .def("BeginLifting", &UILiftBehavior::BeginLifting)
        .def("FinishLifting", &UILiftBehavior::FinishLifting)
        .def("SelectTarget", &UILiftBehavior::SelectTarget)
          ;
}