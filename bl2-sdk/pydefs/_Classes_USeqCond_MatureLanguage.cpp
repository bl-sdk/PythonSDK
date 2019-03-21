#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_MatureLanguage()
{
    class_< USeqCond_MatureLanguage, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_MatureLanguage", no_init)
        .def("StaticClass", &USeqCond_MatureLanguage::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}