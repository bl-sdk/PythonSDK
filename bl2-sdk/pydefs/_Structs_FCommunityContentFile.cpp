#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCommunityContentFile(py::module &m)
{
    py::class_< FCommunityContentFile >(m, "FCommunityContentFile")
        .def_readwrite("ContentId", &FCommunityContentFile::ContentId)
        .def_readwrite("FileId", &FCommunityContentFile::FileId)
        .def_readwrite("ContentType", &FCommunityContentFile::ContentType)
        .def_readwrite("FileSize", &FCommunityContentFile::FileSize)
        .def_readwrite("Owner", &FCommunityContentFile::Owner)
        .def_readwrite("DownloadCount", &FCommunityContentFile::DownloadCount)
        .def_readwrite("AverageRating", &FCommunityContentFile::AverageRating)
        .def_readwrite("RatingCount", &FCommunityContentFile::RatingCount)
        .def_readwrite("LastRatingGiven", &FCommunityContentFile::LastRatingGiven)
        .def_readwrite("LocalFilePath", &FCommunityContentFile::LocalFilePath)
  ;
}