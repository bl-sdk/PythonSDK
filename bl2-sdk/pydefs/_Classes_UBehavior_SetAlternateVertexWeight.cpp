#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetAlternateVertexWeight(py::module &m)
{
    py::class_< UBehavior_SetAlternateVertexWeight,  UBehaviorBase   >(m, "UBehavior_SetAlternateVertexWeight")
        .def_readwrite("BoneName", &UBehavior_SetAlternateVertexWeight::BoneName)
        .def("ApplyBehaviorToContext", &UBehavior_SetAlternateVertexWeight::ApplyBehaviorToContext)
          ;
}