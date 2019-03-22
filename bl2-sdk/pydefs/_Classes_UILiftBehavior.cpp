#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UILiftBehavior(py::module &m)
{
    py::class_< UILiftBehavior,  UInterface   >(m, "UILiftBehavior")
        .def("StaticClass", &UILiftBehavior::StaticClass, py::return_value_policy::reference)
        .def("BeginLifting", &UILiftBehavior::BeginLifting)
        .def("FinishLifting", &UILiftBehavior::FinishLifting)
        .def("SelectTarget", &UILiftBehavior::SelectTarget)
          ;
}