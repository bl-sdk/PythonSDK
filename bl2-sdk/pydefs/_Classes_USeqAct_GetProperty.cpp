#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_GetProperty()
{
    class_< USeqAct_GetProperty, bases< USequenceAction >  , boost::noncopyable>("USeqAct_GetProperty", no_init)
        .def_readwrite("PropertyName", &USeqAct_GetProperty::PropertyName)
        .def("StaticClass", &USeqAct_GetProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}