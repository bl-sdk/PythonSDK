#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIUsable(py::object m)
{
    py::class_< UIUsable,  UInterface   >(m, "UIUsable")
        .def("StaticClass", &UIUsable::StaticClass, py::return_value_policy::reference)
        .def("NotifyUserCouldNotAffordAttemptedUse", &UIUsable::NotifyUserCouldNotAffordAttemptedUse)
        .def("SetInteractionIcon", &UIUsable::SetInteractionIcon)
        .def("UseObject", &UIUsable::UseObject)
          ;
}