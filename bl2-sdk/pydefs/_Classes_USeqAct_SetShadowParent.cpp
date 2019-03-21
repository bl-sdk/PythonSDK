#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetShadowParent()
{
    class_< USeqAct_SetShadowParent, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetShadowParent", no_init)
        .def("StaticClass", &USeqAct_SetShadowParent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}