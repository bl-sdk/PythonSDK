#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPersistentSequenceData()
{
    class_< UPersistentSequenceData, bases< UObject >  , boost::noncopyable>("UPersistentSequenceData", no_init)
        .def_readwrite("LevelPackageName", &UPersistentSequenceData::LevelPackageName)
        .def_readwrite("SequenceName", &UPersistentSequenceData::SequenceName)
        .def_readonly("UnknownData00", &UPersistentSequenceData::UnknownData00)
        .def("StaticClass", &UPersistentSequenceData::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}