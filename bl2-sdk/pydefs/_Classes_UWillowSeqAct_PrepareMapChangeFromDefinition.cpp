#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_PrepareMapChangeFromDefinition()
{
    class_< UWillowSeqAct_PrepareMapChangeFromDefinition, bases< USeqAct_PrepareMapChange >  , boost::noncopyable>("UWillowSeqAct_PrepareMapChangeFromDefinition", no_init)
        .def_readwrite("DefaultMap", &UWillowSeqAct_PrepareMapChangeFromDefinition::DefaultMap)
        .def("StaticClass", &UWillowSeqAct_PrepareMapChangeFromDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetPersistentMap", &UWillowSeqAct_PrepareMapChangeFromDefinition::GetPersistentMap)
        .def("SetPersistentMap", &UWillowSeqAct_PrepareMapChangeFromDefinition::SetPersistentMap)
        .staticmethod("StaticClass")
  ;
}