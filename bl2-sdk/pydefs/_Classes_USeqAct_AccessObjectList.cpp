#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AccessObjectList()
{
    class_< USeqAct_AccessObjectList, bases< USeqAct_SetSequenceVariable >  , boost::noncopyable>("USeqAct_AccessObjectList", no_init)
        .def_readwrite("OutputObject", &USeqAct_AccessObjectList::OutputObject)
        .def_readwrite("ObjectIndex", &USeqAct_AccessObjectList::ObjectIndex)
        .def("StaticClass", &USeqAct_AccessObjectList::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}