#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_IsInObjectList()
{
    class_< USeqAct_IsInObjectList, bases< USequenceAction >  , boost::noncopyable>("USeqAct_IsInObjectList", no_init)
        .def("StaticClass", &USeqAct_IsInObjectList::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}