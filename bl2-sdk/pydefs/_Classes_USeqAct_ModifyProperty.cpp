#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ModifyProperty()
{
    class_< USeqAct_ModifyProperty, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ModifyProperty", no_init)
        .def_readwrite("Properties", &USeqAct_ModifyProperty::Properties)
        .def("StaticClass", &USeqAct_ModifyProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}