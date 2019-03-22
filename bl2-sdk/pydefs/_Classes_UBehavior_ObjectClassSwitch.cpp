#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ObjectClassSwitch(py::module &m)
{
    py::class_< UBehavior_ObjectClassSwitch,  UBehaviorBase   >(m, "UBehavior_ObjectClassSwitch")
        .def_readwrite("ObjectClassName", &UBehavior_ObjectClassSwitch::ObjectClassName)
        .def("StaticClass", &UBehavior_ObjectClassSwitch::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ObjectClassSwitch::ApplyBehaviorToContext)
          ;
}