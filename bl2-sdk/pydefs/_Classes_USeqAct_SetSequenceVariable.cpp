#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetSequenceVariable()
{
    class_< USeqAct_SetSequenceVariable, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetSequenceVariable", no_init)
        .def("StaticClass", &USeqAct_SetSequenceVariable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}