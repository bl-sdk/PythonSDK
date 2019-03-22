#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GetVectorParam(py::module &m)
{
    py::class_< UBehavior_GetVectorParam,  UParameterBehaviorBase   >(m, "UBehavior_GetVectorParam")
        .def("PublishBehaviorOutput", &UBehavior_GetVectorParam::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetVectorParam::ApplyBehaviorToContext)
          ;
}