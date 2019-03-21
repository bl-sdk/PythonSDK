#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_OverpowerLevel()
{
    class_< USeqVar_OverpowerLevel, bases< USeqVar_Int >  , boost::noncopyable>("USeqVar_OverpowerLevel", no_init)
        .def("StaticClass", &USeqVar_OverpowerLevel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}