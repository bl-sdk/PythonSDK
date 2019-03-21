#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_IsPIE()
{
    class_< USeqCond_IsPIE, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_IsPIE", no_init)
        .def("StaticClass", &USeqCond_IsPIE::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqCond_IsPIE::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}