#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_IsConsole()
{
    class_< USeqCond_IsConsole, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_IsConsole", no_init)
        .def("StaticClass", &USeqCond_IsConsole::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}