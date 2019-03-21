#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_IsPlayerServer()
{
    class_< UWillowSeqCond_IsPlayerServer, bases< USequenceCondition >  , boost::noncopyable>("UWillowSeqCond_IsPlayerServer", no_init)
        .def("StaticClass", &UWillowSeqCond_IsPlayerServer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}