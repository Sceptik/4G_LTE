
FILE* f = fopen("data.bin", "ab");
      if (f != NULL) {
          fwrite(buffer, sizeof(cf_t), nsamples, f);
          fclose(f);
      }