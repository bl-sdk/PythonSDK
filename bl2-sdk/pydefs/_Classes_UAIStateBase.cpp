#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAIStateBase()
{
    class_< UAIStateBase, bases< UGearboxEditorNode >  , boost::noncopyable>("UAIStateBase", no_init)
        .def("StaticClass", &UAIStateBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}