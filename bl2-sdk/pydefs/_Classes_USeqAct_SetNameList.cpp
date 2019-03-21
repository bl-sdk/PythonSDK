#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetNameList()
{
    class_< USeqAct_SetNameList, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetNameList", no_init)
        .def_readwrite("SetType", &USeqAct_SetNameList::SetType)
        .def_readwrite("NameListDef", &USeqAct_SetNameList::NameListDef)
        .def("StaticClass", &USeqAct_SetNameList::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}