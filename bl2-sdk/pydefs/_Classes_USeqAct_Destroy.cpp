#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_Destroy()
{
    class_< USeqAct_Destroy, bases< USequenceAction >  , boost::noncopyable>("USeqAct_Destroy", no_init)
        .def_readwrite("IgnoreBasedClasses", &USeqAct_Destroy::IgnoreBasedClasses)
        .def("StaticClass", &USeqAct_Destroy::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}