#ifndef FILEUTILS_H
#define FILEUTILS_H
/**
 * @brief Utility function to save data to a file. This method takes a preferred name, but if that
 * file already exists, it tries with another name until it finds something suitable.
 * E.g. dumpdata-15.txt
 * @param preferredName
 * @param suffix the file suffix. Leave out the ".".
 * @param data The binary data to write to the file
 * @param datalen the length of the data
 * @return 0 for ok, 1 for failz
 */
int saveFile(const char *preferredName, const char *suffix, const void* data, size_t datalen);
/**
 * @brief Utility function to save load binary data from a a file. This method takes a filename,
 * Should only be used for fixed-size binary files
 * @param fileName the name of the file
 * @param data a buffer to place data in
 * @param datalen the length of the data/data.
 * @return
 */

int loadFile(const char *fileName, const void* data, size_t datalen);

#endif // FILEUTILS_H