#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GetItemPrice(py::module &m)
{
    py::class_< UBehavior_GetItemPrice,  UBehaviorBase   >(m, "UBehavior_GetItemPrice")
        .def_readwrite("Item", &UBehavior_GetItemPrice::Item)
        .def_readwrite("Markup", &UBehavior_GetItemPrice::Markup)
        .def("StaticClass", &UBehavior_GetItemPrice::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_GetItemPrice::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetItemPrice::ApplyBehaviorToContext)
          ;
}