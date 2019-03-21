#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetBool()
{
    class_< USeqAct_SetBool, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_SetBool", no_init)
        .def("StaticClass", &USeqAct_SetBool::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}