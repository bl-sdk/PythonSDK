#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ModifyObjectList()
{
    class_< USeqAct_ModifyObjectList, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_ModifyObjectList", no_init)
        .def_readwrite("ListEntriesCount", &USeqAct_ModifyObjectList::ListEntriesCount)
        .def("StaticClass", &USeqAct_ModifyObjectList::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}