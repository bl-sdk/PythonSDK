#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActionSequenceList()
{
    class_< UActionSequenceList, bases< UActionSequence >  , boost::noncopyable>("UActionSequenceList", no_init)
        .def_readwrite("CurrentIndex", &UActionSequenceList::CurrentIndex)
        .def("StaticClass", &UActionSequenceList::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsActionReadyToFinish", &UActionSequenceList::IsActionReadyToFinish)
        .staticmethod("StaticClass")
  ;
}