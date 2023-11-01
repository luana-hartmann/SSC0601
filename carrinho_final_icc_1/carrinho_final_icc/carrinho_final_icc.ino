#include <Ultrasonic.h>
#include <PCM.h>

Ultrasonic sensor (3, 12);

int velocidade = 160;
int cont;
int cont2;
char x;
/*
const unsigned char buzina[] PROGMEM = {
    129, 128, 129, 128, 128, 128, 126, 126, 125, 125, 124, 124, 126, 126, 128, 128, 129, 131, 129, 132, 132, 133, 132, 130, 130, 125, 124, 122, 120, 120, 118, 124, 
    126, 127, 129, 131, 134, 131, 134, 136, 136, 134, 133, 136, 126, 119, 119, 114, 113, 112, 119, 127, 128, 132, 135, 131, 131, 141, 135, 132, 139, 138, 139, 126, 
    121, 122, 107, 106, 111, 115, 123, 135, 141, 126, 131, 137, 135, 133, 126, 146, 143, 128, 142, 133, 112, 104, 108, 107, 106, 123, 142, 144, 124, 129, 140, 126, 
    129, 134, 142, 137, 126, 150, 147, 112, 95, 108, 118, 97, 111, 152, 152, 126, 124, 136, 123, 122, 135, 148, 139, 112, 143, 173, 127, 78, 98, 130, 103, 97, 143, 
    165, 136, 116, 140, 115, 105, 146, 152, 148, 108, 121, 189, 149, 81, 79, 121, 128, 89, 118, 172, 149, 117, 140, 121, 87, 135, 165, 156, 118, 101, 173, 178, 102, 66, 
    100, 137, 107, 96, 151, 176, 119, 123, 154, 77, 104, 178, 153, 134, 102, 144, 197, 127, 66, 79, 131, 128, 88, 129, 174, 137, 115, 160, 105, 63, 166, 180, 128, 102, 
    137, 197, 151, 80, 64, 107, 147, 96, 102, 172, 156, 108, 147, 139, 57, 133, 190, 134, 105, 118, 198, 186, 85, 61, 87, 138, 118, 92, 151, 169, 120, 127, 160, 72, 
    89, 200, 156, 87, 107, 195, 210, 106, 64, 71, 120, 135, 87, 133, 181, 127, 115, 162, 93, 72, 182, 182, 96, 78, 172, 240, 137, 60, 71, 102, 129, 101, 116, 172, 151, 
    106, 149, 123, 53, 159, 211, 111, 59, 143, 244, 171, 76, 65, 88, 125, 107, 104, 163, 166, 110, 138, 132, 57, 130, 219, 151, 54, 98, 235, 209, 89, 62, 88, 113, 113, 
    99, 142, 176, 126, 121, 142, 62, 100, 223, 181, 70, 65, 212, 228, 110, 70, 76, 112, 116, 93, 131, 171, 142, 121, 139, 74, 76, 206, 209, 102, 44, 173, 243, 135, 71, 
    75, 107, 116, 99, 115, 160, 158, 120, 142, 89, 48, 190, 222, 130, 48, 133, 246, 157, 81, 73, 96, 125, 99, 104, 153, 156, 133, 141, 104, 38, 155, 232, 156, 58, 103, 
    239, 179, 87, 76, 91, 122, 106, 98, 144, 158, 135, 139, 125, 35, 119, 230, 177, 78, 76, 222, 207, 96, 76, 84, 119, 117, 93, 133, 157, 141, 137, 138, 46, 83, 222, 
    194, 95, 61, 199, 228, 109, 77, 85, 109, 122, 95, 123, 158, 143, 135, 146, 63, 59, 201, 207, 118, 53, 168, 244, 129, 77, 81, 104, 126, 95, 116, 152, 148, 135, 148, 
    88, 37, 179, 218, 136, 56, 133, 249, 154, 79, 81, 96, 126, 101, 103, 149, 152, 135, 148, 108, 31, 149, 223, 155, 67, 100, 243, 184, 82, 79, 89, 126, 108, 93, 142, 
    153, 139, 143, 128, 34, 116, 226, 170, 82, 77, 225, 209, 93, 79, 83, 120, 119, 88, 131, 154, 141, 141, 139, 48, 84, 218, 189, 97, 61, 199, 234, 108, 75, 84, 112, 
    127, 88, 118, 153, 144, 138, 147, 65, 57, 205, 201, 114, 55, 167, 251, 128, 75, 84, 103, 133, 94, 107, 151, 145, 138, 148, 86, 42, 179, 215, 132, 56, 134, 254, 
    156, 75, 82, 97, 131, 103, 99, 146, 149, 135, 147, 109, 33, 150, 223, 149, 64, 101, 246, 187, 79, 81, 90, 126, 114, 93, 138, 151, 138, 144, 126, 36, 118, 226, 168, 
    77, 76, 226, 215, 90, 79, 87, 119, 120, 90, 131, 152, 141, 141, 138, 49, 87, 219, 186, 94, 60, 198, 238, 107, 76, 85, 111, 127, 90, 121, 152, 144, 138, 145, 67, 58,
    204, 203, 112, 54, 165, 252, 131, 73, 85, 103, 130, 95, 109, 151, 146, 137, 148, 85, 43, 180, 215, 132, 55, 131, 255, 158, 73, 84, 96, 130, 102, 100, 147, 148, 139, 
    146, 105, 35, 149, 224, 151, 64, 100, 246, 188, 78, 81, 91, 126, 113, 93, 139, 151, 139, 145, 123, 37, 118, 225, 170, 78, 74, 225, 217, 88, 75, 90, 119, 121, 90, 131, 
    152, 140, 144, 138, 46, 87, 220, 187, 95, 58, 198, 239, 105, 73, 85, 112, 128, 90, 121, 153, 142, 141, 145, 66, 62, 202, 203, 114, 52, 163, 254, 132, 69, 83, 104, 131, 
    96, 108, 151, 147, 137, 148, 87, 42, 181, 215, 131, 57, 126, 255, 164, 71, 80, 95, 132, 105, 96, 147, 151, 137, 148, 107, 35, 149, 223, 152, 65, 94, 245, 195, 79, 77, 
    88, 129, 114, 89, 140, 152, 138, 145, 125, 39, 113, 224, 172, 81, 71, 217, 224, 96, 73, 84, 120, 126, 87, 128, 156, 141, 141, 140, 51, 80, 217, 189, 99, 57, 185, 245, 
    115, 71, 81, 109, 133, 90, 114, 157, 145, 138, 147, 71, 55, 196, 207, 120, 52, 150, 254, 142, 71, 79, 100, 135, 97, 103, 153, 149, 138, 148, 95, 39, 168, 221, 139, 
    58, 116, 251, 173, 74, 78, 91, 131, 108, 93, 145, 155, 138, 145, 117, 36, 134, 226, 160, 71, 86, 237, 204, 84, 75, 86, 123, 118, 88, 135, 158, 139, 142, 132, 43, 
    101, 221, 181, 86, 64, 212, 229, 100, 74, 82, 114, 126, 88, 125, 156, 144, 140, 141, 61, 69, 208, 200, 106, 51, 178, 248, 122, 73, 80, 106, 130, 93, 112, 155, 149, 136, 
    146, 80, 49, 187, 211, 128, 52, 140, 255, 150, 73, 80, 96, 131, 101, 100, 151, 152, 136, 148, 101, 38, 158, 221, 148, 60, 107, 249, 178, 79, 80, 89, 128, 108, 92, 144, 
    154, 138, 145, 120, 39, 125, 224, 167, 76, 79, 229, 209, 90, 77, 84, 122, 118, 88, 132, 156, 142, 140, 136, 48, 91, 219, 185, 95, 62, 200, 233, 105, 76, 82, 111, 128, 
    87, 120, 158, 144, 139, 143, 66, 64, 201, 202, 115, 54, 166, 250, 129, 74, 81, 103, 131, 93, 109, 155, 149, 136, 146, 89, 44, 177, 216, 134, 57, 131, 252, 157, 76, 80, 
    94, 131, 103, 97, 149, 154, 136, 145, 109, 37, 145, 223, 153, 67, 97, 243, 189, 80, 79, 87, 126, 113, 89, 140, 157, 138, 142, 128, 41, 112, 222, 173, 82, 73, 222, 216,
    94, 77, 81, 119, 123, 85, 128, 159, 143, 138, 138, 58, 79, 211, 192, 102, 59, 188, 241, 114, 74, 81, 109, 129, 89, 114, 158, 147, 134, 147, 75, 55, 194, 205, 122, 54, 
    155, 252, 137, 76, 80, 98, 133, 96, 102, 154, 151, 135, 146, 97, 42, 163, 219, 142, 59, 120, 251, 167, 76, 81, 91, 129, 106, 94, 146, 155, 137, 143, 117, 38, 133, 223, 
    160, 71, 89, 239, 197, 83, 80, 87, 123, 116, 89, 136, 158, 140, 140, 131, 45, 101, 219, 180, 86, 67, 216, 224, 95, 78, 85, 114, 124, 87, 125, 158, 144, 139, 138, 61, 75,
    206, 196, 106, 55, 183, 244, 117, 75, 83, 106, 129, 91, 114, 154, 148, 137, 144, 80, 51, 188, 210, 125, 54, 147, 255, 142, 74, 84, 98, 130, 98, 102, 152, 150, 136, 147,
    98, 40, 160, 218, 146, 60, 113, 251, 172, 77, 82, 92, 128, 107, 93, 145, 153, 138, 144, 117, 39, 128, 222, 163, 75, 84, 234, 203, 85, 81, 87, 123, 117, 88, 135, 156, 141, 
    141, 132, 46, 97, 217, 181, 91, 65, 207, 229, 101, 76, 86, 114, 126, 87, 123, 158, 143, 139, 141, 62, 69, 204, 196, 111, 56, 173, 247, 122, 75, 84, 104, 133, 90, 110, 157, 
    148, 138, 145, 83, 49, 182, 212, 129, 56, 139, 252, 150, 74, 83, 97, 131, 100, 98, 151, 153, 136, 146, 104, 38, 154, 221, 148, 64, 106, 247, 181, 77, 82, 90, 128, 110, 89, 
    142, 156, 138, 143, 122, 39, 121, 222, 168, 78, 80, 229, 211, 89, 79, 85, 120, 121, 85, 131, 158, 142, 139, 134, 52, 89, 213, 186, 97, 62, 198, 238, 107, 74, 84, 112, 128, 
    87, 117, 158, 146, 136, 143, 69, 61, 197, 202, 116, 54, 163, 252, 132, 73, 82, 103, 133, 93, 105, 156, 151, 135, 146, 91, 44, 172, 214, 136, 56, 126, 255, 161, 75, 80, 94, 
    132, 102, 95, 149, 155, 138, 144, 111, 38, 141, 222, 156, 67, 95, 242, 192, 81, 80, 88, 126, 114, 88, 138, 158, 140, 142, 127, 42, 108, 221, 175, 84, 70, 218, 221, 94, 77, 
    85, 118, 123, 87, 126, 159, 143, 139, 138, 56, 79, 209, 193, 103, 56, 188, 242, 113, 76, 83, 109, 130, 89, 116, 156, 147, 137, 144, 76, 54, 190, 208, 122, 52, 151, 254, 140, 
    75, 83, 99, 131, 97, 104, 153, 151, 136, 146, 97, 40, 163, 218, 143, 58, 115, 252, 170, 77, 82, 92, 129, 107, 94, 147, 154, 137, 145, 116, 38, 132, 222, 163, 70, 85, 237, 
    199, 85, 80, 87, 123, 117, 88, 138, 156, 140, 142, 131, 47, 99, 218, 182, 88, 64, 210, 226, 99, 77, 85, 114, 124, 88, 125, 157, 143, 140, 142, 60, 71, 207, 197, 108, 54, 
    179, 245, 118, 75, 84, 104, 130, 91, 113, 156, 145, 139, 146, 79, 52, 184, 210, 129, 54, 143, 254, 145, 74, 83, 96, 131, 98, 102, 152, 150, 137, 146, 102, 40, 156, 219, 
    149, 63, 108, 249, 176, 78, 81, 90, 128, 109, 92, 145, 155, 136, 145, 120, 39, 124, 221, 167, 77, 80, 230, 208, 87, 79, 86, 121, 119, 86, 136, 157, 139, 142, 134, 49, 93, 
    215, 185, 95, 62, 202, 232, 103, 77, 83, 113, 126, 87, 123, 159, 142, 138, 143, 65, 65, 200, 200, 114, 55, 167, 248, 126, 74, 84, 102, 131, 92, 109, 158, 147, 137, 146, 
    86, 47, 178, 212, 134, 58, 132, 253, 154, 76, 83, 94, 131, 100, 97, 151, 153, 136, 145, 107, 39, 148, 220, 153, 67, 100, 244, 185, 81, 81, 88, 127, 111, 88, 143, 156, 
    137, 143, 124, 43, 115, 220, 172, 83, 75, 222, 215, 92, 78, 85, 119, 121, 85, 130, 159, 141, 139, 137, 55, 84, 211, 189, 101, 59, 192, 239, 109, 77, 83, 110, 128, 87, 
    117, 159, 144, 137, 144, 73, 60, 192, 204, 121, 54, 157, 252, 134, 75, 83, 101, 131, 93, 105, 156, 149, 135, 145, 95, 45, 166, 215, 140, 59, 122, 252, 163, 77, 82, 93, 
    130, 103, 95, 150, 154, 136, 144, 114, 41, 136, 220, 159, 72, 90, 239, 194, 83, 81, 87, 124, 114, 88, 141, 157, 137, 142, 128, 47, 105, 217, 178, 88, 68, 215, 221, 96, 
    79, 84, 116, 123, 86, 129, 159, 141, 138, 139, 61, 76, 207, 194, 107, 57, 182, 243, 115, 76, 84, 107, 129, 88, 115, 159, 145, 137, 144, 79, 55, 186, 207, 127, 55, 147, 
    253, 141, 76, 83, 98, 131, 96, 101, 155, 150, 136, 144, 99, 43, 159, 216, 146, 63, 112, 251, 172, 78, 82, 90, 129, 106, 90, 147, 156, 136, 142, 117, 42, 127, 219, 165, 
    78, 83, 232, 205, 87, 80, 86, 122, 117, 84, 135, 161, 139, 138, 133, 50, 95, 215, 182, 96, 64, 203, 231, 104, 78, 82, 114, 127, 82, 121, 163, 144, 135, 141, 69, 67, 198, 
    200, 115, 57, 166, 249, 129, 76, 81, 103, 132, 88, 105, 160, 151, 132, 144, 91, 48, 174, 211, 135, 61, 128, 252, 159, 78, 81, 93, 133, 99, 92, 154, 157, 133, 143, 111, 
    42, 141, 218, 154, 71, 97, 241, 191, 83, 80, 86, 127, 112, 84, 141, 163, 137, 138, 128, 49, 107, 215, 175, 88, 73, 217, 221, 97, 78, 82, 118, 122, 83, 127, 164, 143, 
    134, 139, 63, 76, 204, 193, 106, 59, 185, 243, 116, 77, 81, 107, 129, 87, 112, 162, 148, 132, 142, 84, 55, 181, 208, 128, 55, 147, 255, 143, 76, 81, 97, 131, 95, 100, 
    156, 154, 132, 142, 105, 44, 153, 217, 148, 63, 110, 250, 175, 80, 81, 89, 127, 106, 90, 147, 158, 134, 141, 121, 44, 122, 219, 169, 77, 80, 233, 206, 88, 80, 85, 120, 
    116, 86, 135, 160, 140, 137, 133, 54, 91, 213, 186, 96, 61, 203, 232, 105, 79, 82, 112, 124, 86, 122, 161, 144, 135, 141, 70, 66, 196, 202, 117, 54, 167, 248, 128, 78, 
    82, 101, 129, 92, 109, 158, 149, 134, 144, 90, 48, 172, 213, 137, 57, 130, 253, 156, 78, 83, 93, 129, 100, 97, 152, 153, 136, 143, 109, 41, 142, 219, 158, 68, 97, 243,
    186, 84, 82, 88, 125, 110, 90, 143, 157, 137, 142, 126, 45, 110, 217, 176, 85, 72, 222, 215, 93, 81, 84, 117, 121, 86, 131, 160, 139, 139, 137, 57, 81, 208, 191, 104, 
    58, 191, 238, 111, 79, 83, 107, 127, 88, 118, 160, 144, 136, 143, 76, 58, 188, 205, 125, 55, 154, 250, 136, 78, 83, 99, 130, 94, 104, 157, 150, 134, 146, 97, 43, 163, 
    215, 143, 62, 117, 249, 166, 80, 83, 91, 129, 104, 93, 150, 154, 135, 145, 115, 42, 131, 218, 163, 74, 88, 236, 196, 86, 82, 86, 123, 114, 87, 140, 158, 138, 141, 130, 
    49, 99, 214, 180, 92, 67, 210, 224, 99, 80, 83, 115, 123, 85, 127, 161, 141, 138, 141, 63, 73, 201, 196, 111, 56, 177, 244, 118, 77, 84, 104, 130, 90, 113, 160, 145, 
    136, 146, 82, 52, 181, 209, 131, 56, 142, 252, 144, 78, 83, 95, 131, 98, 101, 155, 150, 135, 147, 102, 42, 152, 217, 151, 65, 107, 247, 175, 80, 83, 89, 126, 108, 91, 
    147, 154, 135, 145, 120, 42, 121, 219, 169, 80, 79, 229, 206, 89, 82, 86, 120, 117, 86, 136, 159, 137, 141, 134, 52, 91, 211, 186, 98, 61, 201, 232, 104, 81, 84, 110, 
    126, 86, 121, 161, 142, 139, 140, 69, 66, 193, 201, 119, 56, 163, 248, 130, 77, 82, 102, 131, 91, 107, 158, 149, 135, 146, 90, 46, 171, 212, 138, 60, 126, 252, 159, 79, 
    82, 92, 132, 102, 93, 153, 154, 134, 146, 109, 42, 138, 218, 159, 71, 94, 239, 192, 84, 81, 86, 127, 112, 86, 143, 158, 136, 141, 128, 46, 105, 216, 175, 88, 71, 215, 
    219, 98, 80, 81, 118, 124, 83, 128, 163, 139, 136, 140, 62, 76, 204, 194, 107, 58, 183, 243, 116, 78, 82, 107, 130, 86, 114, 162, 145, 135, 144, 81, 55, 183, 207, 127, 
    56, 146, 252, 144, 79, 80, 97, 132, 95, 99, 157, 153, 132, 144, 103, 44, 154, 217, 148, 65, 109, 248, 177, 81, 81, 87, 129, 108, 88, 146, 158, 135, 142, 120, 45, 121, 
    218, 168, 80, 80, 229, 209, 92, 79, 82, 123, 118, 83, 134, 162, 137, 137, 135, 55, 89, 211, 187, 98, 62, 200, 233, 109, 80, 80, 111, 127, 85, 119, 163, 143, 135, 141, 
    73, 64, 192, 202, 119, 56, 162, 249, 132, 79, 80, 101, 131, 91, 105, 160, 150, 132, 145, 93, 46, 168, 215, 139, 58, 127, 251, 158, 81, 82, 91, 130, 101, 93, 153, 156, 
    134, 143, 111, 44, 136, 219, 161, 70, 93, 240, 190, 85, 82, 86, 125, 112, 86, 141, 160, 137, 139, 127, 48, 106, 217, 179, 88, 70, 216, 218, 99, 81, 81, 115, 124, 84, 
    125, 163, 141, 136, 137, 63, 76, 204, 195, 109, 57, 181, 242, 119, 79, 81, 106, 130, 88, 111, 161, 147, 133, 143, 82, 54, 182, 208, 130, 56, 144, 250, 145, 81, 80, 95, 
    133, 96, 98, 157, 152, 133, 143, 103, 45, 152, 216, 151, 65, 108, 247, 176, 83, 81, 88, 129, 106, 88, 148, 158, 134, 140, 121, 45, 121, 218, 168, 80, 80, 229, 205, 92,
    81, 83, 122, 118, 83, 135, 163, 137, 137, 134, 56, 89, 210, 187, 98, 62, 199, 231, 107, 80, 81, 111, 127, 85, 120, 164, 143, 135, 141, 73, 64, 193, 202, 119, 56, 163, 247, 
    130, 80, 81, 100, 131, 92, 106, 161, 149, 133, 144, 93, 48, 167, 213, 140, 60, 126, 250, 159, 80, 82, 91, 129, 103, 94, 153, 155, 133, 142, 112, 43, 136, 218, 160, 71, 94, 
    240, 189, 86, 82, 85, 124, 113, 87, 141, 161, 135, 139, 128, 49, 105, 215, 179, 88, 70, 217, 217, 98, 82, 82, 115, 122, 85, 129, 161, 140, 137, 137, 62, 78, 202, 194, 110, 
    57, 184, 240, 117, 81, 81, 106, 128, 88, 114, 161, 144, 134, 144, 80, 55, 181, 208, 130, 54, 147, 251, 142, 81, 83, 96, 131, 96, 100, 157, 150, 133, 145, 101, 43, 154, 216,
    150, 63, 111, 248, 172, 83, 83, 89, 127, 106, 91, 149, 155, 134, 143, 119, 43, 122, 217, 169, 78, 82, 232, 201, 91, 85, 83, 120, 117, 86, 138, 158, 135, 141, 132, 52, 92, 
    211, 187, 97, 63, 204, 227, 104, 83, 81, 110, 126, 87, 123, 160, 141, 138, 142, 68, 67, 196, 202, 117, 55, 169, 245, 125, 81, 83, 99, 130, 92, 110, 158, 144, 136, 146, 87,
    49, 173, 212, 137, 58, 133, 251, 150, 82, 85, 90, 130, 101, 98, 153, 149, 136, 146, 107, 42, 143, 218, 157, 68, 100, 242, 182, 84, 84, 85, 125, 113, 90, 144, 155, 136, 143, 
    124, 45, 112, 216, 174, 85, 74, 223, 211, 93, 84, 83, 116, 122, 86, 133, 157, 138, 141, 136, 57, 83, 206, 192, 104, 58, 193, 234, 111, 82, 82, 106, 128, 89, 118, 158, 142, 
    138, 143, 76, 60, 188, 206, 125, 55, 155, 248, 136, 80, 82, 97, 131, 95, 104, 156, 147, 136, 146, 94, 46, 162, 214, 145, 61, 120, 249, 163, 81, 84, 89, 129, 106, 94, 149, 
    152, 136, 145, 112, 43, 132, 217, 164, 75, 89, 236, 194, 87, 83, 83, 124, 115, 87, 140, 156, 136, 142, 130, 49, 100, 214, 181, 91, 68, 212, 221, 100, 82, 81, 113, 124, 87, 
    128, 160, 139, 139, 140, 63, 73, 200, 198, 111, 56, 179, 242, 119, 79, 82, 103, 130, 90, 115, 160, 143, 136, 146, 82, 52, 180, 210, 132, 54, 143, 251, 144, 81, 83, 93, 130, 
    98, 102, 155, 149, 136, 146, 101, 43, 152, 217, 153, 62, 108, 247, 174, 82, 84, 87, 126, 108, 94, 147, 153, 135, 146, 120, 42, 122, 218, 172, 78, 79, 232, 201, 91, 84, 83, 
    118, 116, 90, 136, 157, 136, 143, 134, 51, 93, 209, 188, 97, 61, 205, 226, 104, 82, 82, 110, 122, 92, 123, 161, 140, 138, 144, 65, 70, 191, 201, 119, 51, 173, 241, 125, 80, 
    83, 105, 126, 97, 109, 162, 143, 135, 150, 81, 52, 168, 210, 137, 54, 135, 242, 152, 85, 84, 94, 131, 115, 100, 148, 151, 141, 147, 96, 46, 141, 211, 152, 63, 110, 221, 176, 
    98, 82, 97, 125, 129, 108, 130, 146, 149, 149, 103, 46, 117, 212, 162, 67, 97, 206, 182, 106, 99, 92, 117, 144, 113, 124, 133, 152, 157, 101, 60, 104, 192, 180, 79, 82, 192, 
    181, 113, 108, 98, 110, 143, 127, 117, 120,
};
*/

// configurações das entradas e saídas no arduíno
void setup () {
    Serial.begin (9600); 
    pinMode (2, OUTPUT); // LED ESQUERDO
    pinMode (4, OUTPUT); // LED DIREITO
    pinMode (11, OUTPUT); // BUZZER

    // saídas da ponte H
    pinMode (5, OUTPUT); // ENA
    pinMode (10, OUTPUT); // ENB

    // saídas dos motores
    pinMode (6, OUTPUT); // IN1 frente, roda 1
    pinMode (7, OUTPUT); // IN2 trás, roda 1
    pinMode (8, OUTPUT); // IN3 trás, roda 2
    pinMode (9, OUTPUT); // IN4 frente, roda 2

    // entradas e saídas do ultrassom
    pinMode (3, OUTPUT); // TRIGG
    pinMode (12, INPUT); // ECHO
}

// função para executar parada do carrinho mediante determinada distância
void ultrassom () {
    int distancia = sensor.read (CM);
    if (distancia <= 20) {
        digitalWrite (6, LOW);
        digitalWrite (7, LOW);
        digitalWrite (8, LOW);
        digitalWrite (9, LOW);
        analogWrite (5, velocidade);
        analogWrite (10, velocidade);
        Serial.println ("PAROU");
        tone (11, 1000, 100);
        delay (250);
        digitalWrite (6, LOW);
        digitalWrite (7, HIGH);
        digitalWrite (8, HIGH);
        digitalWrite (9, LOW);
        Serial.println ("VOLTANDO");
        tone (11, 500, 100);
        delay (1000);
        digitalWrite (6, LOW);
        digitalWrite (7, LOW);
        digitalWrite (8, LOW);
        digitalWrite (9, LOW);
        delay (250);
    }
}

// função que aumenta ou diminui a velocidade do carrinho
void veloci() {
    if (x == 'b') {
        cont = 1;
        while (cont > 0 && velocidade < 240){
            velocidade += 20;
            cont --;
            Serial.println ("AUMENTA");
            delay (500);
        }
    }

    if (x == 't') {
        cont2 = 1;
        while (cont2 > 0 && velocidade > 160){
            velocidade = velocidade-20;
            cont --;
            Serial.println ("DIMINUI");
            delay (500);
        }
    }

    analogWrite (5, velocidade);
    analogWrite (10, velocidade);
}

void loop () {
    x = Serial.read ();
    ultrassom();
    veloci();

    switch (x) {
        case 'f': // frente
            digitalWrite (2, LOW);
            digitalWrite (4, LOW);
            
            digitalWrite (6, HIGH);
            digitalWrite (7, LOW);
            digitalWrite (8, LOW);
            digitalWrite (9, HIGH);
            break;
        case 'd': // direita
            digitalWrite (2, LOW);
            digitalWrite (4, HIGH);

            digitalWrite (6, HIGH);
            digitalWrite (7, LOW);
            digitalWrite (8, LOW);
            digitalWrite (9, LOW);
            break;
        case 'e': // esquerda
            digitalWrite (2, HIGH);
            digitalWrite (4, LOW);

            digitalWrite (6, LOW);
            digitalWrite (7, LOW);
            digitalWrite (8, LOW);
            digitalWrite (9, HIGH);
            break;
        case 't': // trás
            digitalWrite (2, HIGH);
            digitalWrite (4, HIGH);

            digitalWrite (6, LOW);
            digitalWrite (7, HIGH);
            digitalWrite (8, HIGH);
            digitalWrite (9, LOW);
            break;
        case 'o': // parada
            digitalWrite (2, LOW);
            digitalWrite (4, LOW);

            digitalWrite (6, LOW);
            digitalWrite (7, LOW);
            digitalWrite (8, LOW);
            digitalWrite (9, LOW);
            break;
        case 'q': // buzina
            tone (11, 500, 100);
            break;
      
    }

    Serial.println ("Velocidade:");
    Serial.println (velocidade);
    delay (1000);
}