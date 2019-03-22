#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetCleanupParameters(py::module &m)
{
    py::class_< UBehavior_SetCleanupParameters,  UBehaviorBase   >(m, "UBehavior_SetCleanupParameters")
        .def_readwrite("MaxLifetime", &UBehavior_SetCleanupParameters::MaxLifetime)
        .def("eventApplyBehaviorToContext", &UBehavior_SetCleanupParameters::eventApplyBehaviorToContext)
          ;
}