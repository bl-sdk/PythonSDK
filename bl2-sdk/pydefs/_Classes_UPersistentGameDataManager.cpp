#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPersistentGameDataManager()
{
    class_< UPersistentGameDataManager, bases< UObject >  , boost::noncopyable>("UPersistentGameDataManager", no_init)
        .def_readwrite("SequencesWithPersistentData", &UPersistentGameDataManager::SequencesWithPersistentData)
        .def("StaticClass", &UPersistentGameDataManager::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}