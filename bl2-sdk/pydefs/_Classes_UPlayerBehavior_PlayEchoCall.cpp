#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_PlayEchoCall(py::module &m)
{
    py::class_< UPlayerBehavior_PlayEchoCall,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_PlayEchoCall")
        .def("ApplyBehaviorToContext", &UPlayerBehavior_PlayEchoCall::ApplyBehaviorToContext)
          ;
}