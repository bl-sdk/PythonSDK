#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_Destroy(py::module &m)
{
    py::class_< UBehavior_Destroy,  UBehaviorBase   >(m, "UBehavior_Destroy")
        .def("ApplyBehaviorToContext", &UBehavior_Destroy::ApplyBehaviorToContext)
          ;
}