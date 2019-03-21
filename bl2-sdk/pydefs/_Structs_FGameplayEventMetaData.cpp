#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGameplayEventMetaData()
{
    class_< FGameplayEventMetaData >("FGameplayEventMetaData", no_init)
        .def_readwrite("EventID", &FGameplayEventMetaData::EventID)
        .def_readwrite("EventName", &FGameplayEventMetaData::EventName)
        .def_readwrite("StatGroup", &FGameplayEventMetaData::StatGroup)
        .def_readwrite("EventDataType", &FGameplayEventMetaData::EventDataType)
  ;
}