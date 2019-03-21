#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_GetLanguage()
{
    class_< USeqCond_GetLanguage, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_GetLanguage", no_init)
        .def_readwrite("LangList", &USeqCond_GetLanguage::LangList)
        .def("StaticClass", &USeqCond_GetLanguage::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}