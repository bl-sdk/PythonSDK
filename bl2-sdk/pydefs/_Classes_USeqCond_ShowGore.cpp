#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_ShowGore()
{
    class_< USeqCond_ShowGore, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_ShowGore", no_init)
        .def("StaticClass", &USeqCond_ShowGore::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}