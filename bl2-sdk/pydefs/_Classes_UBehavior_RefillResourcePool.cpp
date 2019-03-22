#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RefillResourcePool(py::module &m)
{
    py::class_< UBehavior_RefillResourcePool,  UBehaviorBase   >(m, "UBehavior_RefillResourcePool")
        .def_readwrite("Resource", &UBehavior_RefillResourcePool::Resource)
        .def_readwrite("Percentage", &UBehavior_RefillResourcePool::Percentage)
        .def_readwrite("MaxPercentage", &UBehavior_RefillResourcePool::MaxPercentage)
        .def_readwrite("PercentageContext", &UBehavior_RefillResourcePool::PercentageContext)
        .def("StaticClass", &UBehavior_RefillResourcePool::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_RefillResourcePool::ApplyBehaviorToContext)
          ;
}