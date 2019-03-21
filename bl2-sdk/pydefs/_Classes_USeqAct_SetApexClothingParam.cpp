#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetApexClothingParam()
{
    class_< USeqAct_SetApexClothingParam, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetApexClothingParam", no_init)
        .def("StaticClass", &USeqAct_SetApexClothingParam::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}