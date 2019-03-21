#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInputMatchRequest()
{
    class_< FInputMatchRequest >("FInputMatchRequest", no_init)
        .def_readwrite("Inputs", &FInputMatchRequest::Inputs)
        .def_readwrite("MatchActor", &FInputMatchRequest::MatchActor)
        .def_readwrite("MatchFuncName", &FInputMatchRequest::MatchFuncName)
        .def_readwrite("MatchDelegate", &FInputMatchRequest::MatchDelegate)
        .def_readwrite("FailedFuncName", &FInputMatchRequest::FailedFuncName)
        .def_readwrite("RequestName", &FInputMatchRequest::RequestName)
        .def_readwrite("MatchIdx", &FInputMatchRequest::MatchIdx)
        .def_readwrite("LastMatchTime", &FInputMatchRequest::LastMatchTime)
  ;
}