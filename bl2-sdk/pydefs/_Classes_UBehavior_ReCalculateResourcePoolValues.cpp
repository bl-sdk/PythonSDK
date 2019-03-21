#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ReCalculateResourcePoolValues(py::object m)
{
    py::class_< UBehavior_ReCalculateResourcePoolValues,  UBehaviorBase   >(m, "UBehavior_ReCalculateResourcePoolValues")
        .def_readwrite("Resource", &UBehavior_ReCalculateResourcePoolValues::Resource)
        .def("StaticClass", &UBehavior_ReCalculateResourcePoolValues::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ReCalculateResourcePoolValues::ApplyBehaviorToContext)
          ;
}